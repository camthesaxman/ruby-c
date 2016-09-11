int __fastcall pokemon_restore_pp(unsigned int *a1)
{
  unsigned int *v1; // r5@1
  signed int v2; // r6@1
  unsigned __int16 v3; // r4@3
  char v4; // r0@3
  char v6; // [sp+0h] [bp-14h]@3
  int v7; // [sp+10h] [bp-4h]@5

  v1 = a1;
  v2 = 0;
  do
  {
    if ( GetBoxMonData(v1, v2 + 13, 0) )
    {
      v3 = GetBoxMonData(v1, v2 + 13, 0);
      v4 = GetBoxMonData(v1, 21, 0);
      v6 = CalcPPWithPPUps(v3, v4, v2);
      SetBoxMonData(v1, v2 + 17, (int)&v6);
    }
    ++v2;
  }
  while ( v2 <= 3 );
  return v7;
}
