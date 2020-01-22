# DAY 1: Mảng 2D (2D Arrays)

### Objective - Mục tiêu
Thông qua bài tập này ta có thể nắm bắt được kiến thức về mảng.

### Context
Cho một ma trận vuông cấp 6 (6 x 6)
Ví dụ:
```
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
``` 

Chúng ta định nghĩa đồng hồ các (hourglass) trong ma trận với mẫu sau:
```
a b c
_ e _
f g h

*note: ký tự "_" là ký tự **trắng** " "*
```
Vậy theo ma trận ta có tất cả là 16 mẫu hourglass. 


### Task
Tìm tổng hourglass có giá trị lớn nhất, hiển thị *giá trị tổng lớn nhất* ra màn hình.

### Input
Nhập ma trận vuông cấp 6, nghĩa là ta nhập ma trận có 6 dòng 6 cột và mỗi ô chứa giá trị -9 <= 0 <= 9.

### Output
Tổng hourglass lớn nhất.

### Sample Input
```
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
```

### Sample output
```
19
```

### Explanation - Giải thích.
Ma trận A chưa các hourglass sau:
```
1 1 1   1 1 0   1 0 0   0 0 0
  1       0       0       0
1 1 1   1 1 0   1 0 0   0 0 0

0 1 0   1 0 0   0 0 0   0 0 0
  1       1       0       0
0 0 2   0 2 4   2 4 4   4 4 0

1 1 1   1 1 0   1 0 0   0 0 0
  0       2       4       4
0 0 0   0 0 2   0 2 0   2 0 0

0 0 2   0 2 4   2 4 4   4 4 0
  0       0       2       0
0 0 1   0 1 2   1 2 4   2 4 0
```

Vậy ta có hourglass có tổng giá trị lớn nhất (19) là:
```
2 4 4
  2
1 2 4
```

### Reference
Website: [Dương Đụt | Hackerrank | Day 11: 2D Arrays ](https://www.hackerrank.com/challenges/30-2d-arrays/problem)

### Contact me
* **Facebook:** [Dương ĐỤt](https://www.facebook.com/Cc35CzTk)
* **Email:** pduongpdu99@gmail.com
* **Instagram:** [Cc35CzTk](https://www.instagram.com/cc35cztk/)