int __fastcall sub_80A1B1C(char a1)
{
  char v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    sub_80A18E4(v1 + v2);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 9 );
  return v4;
}
