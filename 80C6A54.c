int __fastcall sub_80C6A54(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r5@1
  unsigned int v4; // r7@1
  unsigned int v5; // r1@1
  unsigned int v6; // r4@1
  unsigned int v7; // r6@1
  int v8; // r0@1
  int *v9; // r1@4
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1 << 16;
  v3 = v2 >> 16;
  v4 = v2 >> 16;
  v5 = a2 << 16;
  v6 = v5 >> 16;
  v7 = v5 >> 16;
  v8 = (unsigned __int8)player_get_direction_lower_nybble();
  if ( v8 == 1 )
  {
    sub_80C69C4(v3, v6);
  }
  else if ( v8 == 2 )
  {
    v9 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80C6A14, 5)];
    *((_WORD *)v9 + 4) = 0;
    *((_WORD *)v9 + 5) = v4;
    *((_WORD *)v9 + 6) = v7;
  }
  return v11;
}
