int __fastcall sub_809E534(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( word_300179E & 0x40 )
  {
    LOWORD(dword_3004B20[10 * a1 + 2]) = 3;
    sub_809E8F0(a1, -1, 33652858);
  }
  else if ( word_300179E & 0x80 )
  {
    LOWORD(dword_3004B20[10 * a1 + 2]) = 3;
    sub_809E8F0(a1, 1, 33652858);
  }
  else if ( word_300179E & 1 )
  {
    sub_809E83C(a1, 1);
  }
  else if ( word_300179E & 2 )
  {
    sub_809E83C(a1, -1);
  }
  return v2;
}
