signed int __fastcall GiveMoveToBoxMon(int a1, unsigned __int16 a2)
{
  int v2; // r7@1
  signed int v3; // r5@1
  int v4; // r0@2
  unsigned __int16 v6; // [sp+0h] [bp-18h]@1

  v2 = a1;
  v6 = a2;
  v3 = 0;
  do
  {
    v4 = (unsigned __int16)GetBoxMonData(v2, v3 + 13, 0);
    if ( !v4 )
    {
      SetBoxMonData(v2, v3 + 13, &v6);
      SetBoxMonData(v2, v3 + 17, (char *)&unk_81FB130 + 12 * v6);
      return v6;
    }
    if ( v4 == v6 )
      return 65534;
    ++v3;
  }
  while ( v3 <= 3 );
  return 0xFFFF;
}
