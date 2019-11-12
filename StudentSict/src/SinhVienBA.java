
public class SinhVienBA extends SinhVienSict {
	double diemMar;
	double diemSales;

	public SinhVienBA() {
		super();
	}

	public SinhVienBA(String hoTen, String nganh, double diemMar, double diemSales) {
		super();
		this.diemMar = diemMar;
		this.diemSales = diemSales;
	}

	@Override
	double getDiem() {
		// TODO Auto-generated method stub
		return (diemMar * 2 + diemSales) / 3;
	}

}
