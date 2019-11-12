import java.util.ArrayList;
import java.util.Scanner;

public class StudentManagement {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<SinhVienSict> sv = new ArrayList<>();
		Scanner scn = new Scanner(System.in);
		int tongsv = 0;
		int sl1 = 0;
		int sl2 = 0;
		while (true) {
			System.out.println("--------MENU--------");
			System.out.println("1.Nhap ds sv");
			System.out.println("2.Ds sv");
			System.out.println("3.Ds sv gioi");
			System.out.println("4.Ds sv co diem tang dan");
			System.out.println("0.Thoat");
			System.out.println("---------------------");
			System.out.print("Chon chuc nang so ?");
			int n = Integer.parseInt(scn.nextLine());
			if (n == 1) {
				System.out.print("Chon nhap sv: 1.svIt/2.svBA:");
				int ch = Integer.parseInt(scn.nextLine());
				if (ch == 1) {
					System.out.println("Nhap so luong svIt:");
					sl1 = Integer.parseInt(scn.nextLine());
					System.out.println("Nhap svIt:");
					for (int i = 0; i < sl1; i++) {
						System.out.println("sv thu " + (i + 1));
						System.out.print("Ho Ten:");
						String hoTen = scn.nextLine();
						System.out.print("Nganh:");
						String nganh = scn.nextLine();
						System.out.print("Ma Sv:");
						String MaSv = scn.nextLine();
						System.out.print("Diem Java:");
						double diemJava = Double.parseDouble(scn.nextLine());
						System.out.print("Diem Html:");
						double diemHtml = Double.parseDouble(scn.nextLine());
						System.out.print("Diem Css:");
						double diemCss = Double.parseDouble(scn.nextLine());
						SinhVienSict It = new SinhVienIt(hoTen, nganh, diemJava, diemHtml, diemCss);
						sv.add(It);
					}
				} else {
					System.out.println("Nhap so luong svBA:");
					sl2 = Integer.parseInt(scn.nextLine());
					System.out.println("Nhap svBA");
					for (int i = sl1; i <= (sl1 + sl2); i++) {
						System.out.print("Ho Ten:");
						String hoTen = scn.nextLine();
						System.out.print("Nganh:");
						System.out.print("Ma Sv:");
						String MaSv = scn.nextLine();
						String nganh = scn.nextLine();
						System.out.print("Diem Mar:");
						double diemMar = Double.parseDouble(scn.nextLine());
						System.out.print("Diem Sales:");
						double diemSales = Double.parseDouble(scn.nextLine());
						SinhVienSict BA = new SinhVienBA(hoTen, nganh, diemMar, diemSales);
						sv.add(BA);
					}
				}
				tongsv = sl1 + sl2;
			} else if (n == 2) {
				System.out.print("Ds sv Sict:");
				for (int i = 0; i < tongsv; i++) {
					sv.get(i).output();
				}
			} else if (n == 3) {
				System.out.print("Ds sv co hoc luc gioi:");
				for (int i = 0; i < tongsv; i++) {
					if (sv.get(i).getHocLuc() == "Gioi") {
						sv.get(i).output();
					}
				}
			} else if (n == 4) {
				System.out.print("Thu tu ds sv co diem tang dan");
				for (int i = 0; i < tongsv - 1; i++) {
					for (int j = i + 1; j < tongsv; j++) {
						if (sv.get(i).getDiem() > sv.get(i).getDiem()) {
							SinhVienSict SV = sv.get(i);
							sv.set(i, sv.get(j));
							sv.set(j, SV);
						}
					}
				}
			} else
				break;
		}
	}
}
