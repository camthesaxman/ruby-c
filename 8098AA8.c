int __fastcall sub_8098AA8(int a1)
{
  unsigned int v1; // r0@1
  signed int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = sub_809CDCC();
  if ( v2 == 1 )
  {
    sub_809CDEC(20);
    sub_809CDEC(21);
    sub_809CDEC(22);
    v4 = sub_809CDEC(23);
  }
  else if ( v2 > 1 )
  {
    if ( v3 == 2 )
    {
      sub_809CDEC(24);
      sub_809CDEC(25);
      sub_809CDEC(26);
      v4 = sub_809CDEC(27);
    }
    else if ( v3 == 3 )
    {
      sub_809CDEC(28);
      sub_809CDEC(29);
      sub_809CDEC(30);
      v4 = sub_809CDEC(31);
    }
  }
  else if ( !v2 )
  {
    sub_809CDEC(16);
    sub_809CDEC(17);
    sub_809CDEC(18);
    v4 = sub_809CDEC(19);
  }
  sub_809CE84(v4);
  return v6;
}
