int __fastcall sub_80F9F3C(int a1, int a2, int a3)
{
  unsigned int v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v202E8DC = 0;
  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v202E8CC], v3 + 13, a3) )
      ++v202E8DC;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 3 );
  return v5;
}
