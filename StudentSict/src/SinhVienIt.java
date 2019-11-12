
public class SinhVienIt extends SinhVienSict {
	double diemJava;
	double diemHtml;
	double diemCss;

	public SinhVienIt() {
		super();
	}

	public SinhVienIt(String hoTen, String nganh, double diemJava, double diemHtml, double diemCss) {
		super();
		this.diemJava = diemJava;
		this.diemHtml = diemHtml;
		this.diemCss = diemCss;
	}

	@Override
	double getDiem() {
		// TODO Auto-generated method stub
		return (diemJava * 2 + diemHtml + diemCss) / 4;
	}

	void output() {
		System.out.println(this.hoTen + "|" + this.nganh + "|" + this.getDiem() + "|" + this.getHocLuc());
	}
}
