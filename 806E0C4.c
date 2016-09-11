int __fastcall sub_806E0C4(int a1, int a2, int a3)
{
  unsigned int v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v3 = 0;
  do
  {
    sub_806E07C(v3, (int)&dword_3004360[25 * v3], a3);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 5 );
  return v5;
}
