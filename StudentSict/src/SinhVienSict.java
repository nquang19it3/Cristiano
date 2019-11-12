
public abstract class SinhVienSict {
	public String hoTen;
	public String nganh;
	public String MaSv;

	public SinhVienSict() {
		super();
	}

	public SinhVienSict(String hoTen, String nganh, String MaSv) {
		super();
		this.hoTen = hoTen;
		this.nganh = nganh;
		this.MaSv = MaSv;
	}

	public String getMaSv() {
		return MaSv;
	}

	public void setMaSv() {
		this.MaSv = MaSv;
	}

	abstract double getDiem();

	String getHocLuc() {
		double TB = getDiem();
		if (TB < 5) {
			return "Yeu";
		} else if (TB < 6.5) {
			return "Trung Binh";

		} else if (TB < 7.5) {
			return "Kha";
		} else if (TB < 9) {
			return "Gioi";

		} else
			return "Xuat Sac";
	}

	void output() {
		System.out.println(this.hoTen + "|" + this.nganh + "|" + this.getDiem() + "|" + this.getHocLuc());
	}
}