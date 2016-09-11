signed int __fastcall sub_812556C(int a1)
{
  signed int v1; // r4@1

  v1 = 1;
  sub_81255B8((unsigned int)((a1 << 16) - 0x10000) >> 16);
  if ( dword_3005EA8 )
  {
    v1 = 255;
    word_3005E9C = word_3005EA4;
    dword_3005EAC = dword_3005EA0;
  }
  return v1;
}
