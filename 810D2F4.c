int __fastcall sub_810D2F4(unsigned __int16 a1)
{
  int v1; // r4@1
  int i; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  for ( i = sub_810D280(); v1; v1 = (v1 - 1) & 0xFFFF )
    i = 1103515245 * i + 12345;
  sub_810D2AC(i);
  return v4;
}
