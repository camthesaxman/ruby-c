int __fastcall sub_808AF20(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 11, a3)
      && (GetMonData((int)&dword_3004360[25 * v3], 45, a3)
       || !(GetEvolutionTargetSpecies((int)&dword_3004360[25 * v3], 3u, v203855E) << 16)) )
    {
      sub_806D668(v3);
      sub_806BC3C(v3, 0);
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 5 );
  return v5;
}
