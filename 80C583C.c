signed int __fastcall overworld_poison(int a1, int a2, int a3)
{
  unsigned int *v3; // r4@1
  int v4; // r7@1
  int v5; // r6@1
  signed int v6; // r5@1
  int v7; // r0@2
  char v8; // r0@3
  int v9; // r0@4
  signed int result; // r0@13
  int v11; // [sp+0h] [bp-18h]@4

  v3 = dword_3004360;
  v4 = 0;
  v5 = 0;
  v6 = 5;
  do
  {
    v7 = GetMonData((int)v3, 5, a3);
    if ( v7 )
    {
      v8 = GetMonData((int)v3, 55, a3);
      v7 = (unsigned __int8)pokemon_ailments_get_primary(v8);
      if ( v7 == 1 )
      {
        v9 = GetMonData((int)v3, 57, a3);
        v11 = v9;
        if ( !v9 || (v11 = v9 - 1, v9 == 1) )
          ++v5;
        v7 = SetMonData((int)v3, 57, (int)&v11);
        ++v4;
      }
    }
    v3 += 25;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v5 || v4 )
    overworld_posion_effect(v7);
  if ( v5 )
    result = 2;
  else
    result = v4 != 0;
  return result;
}
