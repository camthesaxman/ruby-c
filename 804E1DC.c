int __fastcall sub_804E1DC(int a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = 0;
  v4 = 0;
  do
  {
    v3 = (v3 + GetMonData((int)&unk_30045C0 + 100 * (v20297D9 % 6u), v4 + 67, a3)) & 0xFF;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xB );
  if ( v3 )
    FlagSet(2107);
  return v6;
}
