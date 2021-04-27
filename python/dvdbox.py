
class DVD:
    def __init__(self, title, year, director) -> None:
        self.title = title
        self.year = year
        self.director = director

    def disclose(self):
        print(self.title + "," + self.director )

mydvd1 = DVD ("Avengers", 2018, "Hulk")
mydvd2 = DVD ("Avengers", 2018, "Iron Man")

dvdCollection=[mydvd1, mydvd2]

for dvd in dvdCollection:
    dvd.disclose()