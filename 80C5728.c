int __fastcall sub_80C5728(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r1@1
  unsigned int *v4; // r4@1
  int v5; // r2@1
  int v6; // r2@2
  char v7; // r0@3
  int result; // r0@4

  v3 = 25 * a1;
  v4 = &dword_3004360[v3];
  result = 0;
  if ( sub_80C5684((int)&dword_3004360[v3], v3 * 4, a3) && !GetMonData((int)v4, 57, v5) )
  {
    v7 = GetMonData((int)v4, 55, v6);
    if ( (unsigned __int8)pokemon_ailments_get_primary(v7) == 1 )
      result = 1;
  }
  return result;
}
