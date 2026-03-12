class ThuVien:
    def __init__(self):
        # Khởi tạo kho sách ngay trong hàm __init__
        # Key: Mã sách | Value: [Tên sách, Số lượng]
        self.kho_sach = {
            "S001": {"ten": "Lập trình Python", "sl": 3},
            "S002": {"ten": "Cấu trúc dữ liệu", "sl": 1},
            "S003": {"ten": "Trí tuệ nhân tạo", "sl": 5}
        }
        # Danh sách quản lý các lượt mượn
        self.danh_sach_muon = []

    def muon_sach(self, ma_sach, nguoi_muon):
        """Phương thức mượn sách với điều kiện số lượng > 1"""
        if ma_sach in self.kho_sach:
            sach = self.kho_sach[ma_sach]
            
            # Kiểm tra điều kiện số lượng > 1
            if sach["sl"] > 1:
                # Trừ 1 ở số lượng kho
                sach["sl"] -= 1
                
                # Lưu thông tin mượn vào danh sách
                phieu = {
                    "nguoi_muon": nguoi_muon,
                    "ma_sach": ma_sach,
                    "trang_thai": "Chưa trả"
                }
                self.danh_sach_muon.append(phieu)
                print(f"✅ Cho mượn thành công! '{sach['ten']}' còn lại {sach['sl']} cuốn.")
            else:
                print(f"❌ Từ chối: Sách '{sach['ten']}' chỉ còn 1 cuốn, cần giữ lại kho!")
        else:
            print("❌ Lỗi: Mã sách không tồn tại trong hệ thống.")

    def tra_sach(self, ma_sach, nguoi_muon):
        """Phương thức trả sách và cộng lại số lượng vào kho"""
        da_tra = False
        for phieu in self.danh_sach_muon:
            if (phieu["ma_sach"] == ma_sach and 
                phieu["nguoi_muon"] == nguoi_muon and 
                phieu["trang_thai"] == "Chưa trả"):
                
                # Cập nhật trạng thái phiếu và cộng lại kho
                phieu["trang_thai"] = "Đã trả"
                self.kho_sach[ma_sach]["sl"] += 1
                da_tra = True
                print(f"✅ Trả thành công! Kho hiện có {self.kho_sach[ma_sach]['sl']} cuốn '{self.kho_sach[ma_sach]['ten']}'.")
                break
        
        if not da_tra:
            print(f"❌ Không tìm thấy lượt mượn chưa trả của '{nguoi_muon}' với mã '{ma_sach}'.")

    def thong_ke_chua_tra(self):
        """Phương thức thống kê các lượt mượn chưa trả"""
        print("\n--- DANH SÁCH MƯỢN CHƯA TRẢ ---")
        
        # Lọc danh sách mượn
        ket_qua = [p for p in self.danh_sach_muon if p["trang_thai"] == "Chưa trả"]
        
        if not ket_qua:
            print("Hiện tại không có ai mượn sách.")
        else:
            for i, p in enumerate(ket_qua, 1):
                ten_s = self.kho_sach[p['ma_sach']]['ten']
                print(f"{i}. {p['nguoi_muon']} đang mượn: {ten_s} ({p['ma_sach']})")
        print("-------------------------------\n")
