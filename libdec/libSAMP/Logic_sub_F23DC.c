// ADDR: 0xecd64
// SYMBOL: sub_ECD64
int __fastcall sub_ECD64(int a1, int a2)
{
  void *v3; // r0

  switch ( a1 )
  {
    case 0:
      sub_ECDE8();
      v3 = &qword_23DC48;
      break;
    case 1:
      sub_ECE98();
      v3 = &qword_23DC88;
      break;
    case 2:
      sub_ECF80();
      v3 = &qword_23DD08;
      break;
    case 3:
      sub_ECF0C();
      v3 = &qword_23DCC8;
      break;
    case 4:
      sub_ECFF4();
      v3 = &qword_23DD48;
      break;
    case 5:
      sub_ED068();
      v3 = &qword_23DD88;
      break;
    case 6:
      sub_ED0DC();
      v3 = &qword_23DDC8;
      break;
  }
  return sub_ECE5C(v3, a2);
}


// ======================================================================
