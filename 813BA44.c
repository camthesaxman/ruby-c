int c2_copyright_1()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !(SetUpCopyrightScreen() << 24) )
  {
    sub_8052E4C();
    sub_81251B8();
    sub_8125EC8(0);
    if ( !word_3005EB8 || word_3005EB8 == 2 )
      ClearSav2();
    sub_81DF5D8(v2024EB9 & 1);
  }
  return v1;
}
