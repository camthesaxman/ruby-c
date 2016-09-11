signed int sub_80D4394()
{
  int v0; // r2@1
  int v1; // r1@2
  unsigned int *v2; // r0@2
  int v4; // r5@5
  unsigned int v5; // r4@5
  int v6; // r2@5
  int v7; // r3@5
  unsigned int v8; // r4@5
  int v9; // r2@5
  unsigned __int8 v10; // r1@6

  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v1 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
    v2 = (unsigned int *)&unk_30045C0;
  }
  else
  {
    v1 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
    v2 = dword_3004360;
  }
  v4 = (int)&v2[v1];
  v5 = GetMonData((int)&v2[v1], 58, v0) << 16;
  v7 = (unsigned __int16)GetMonData(v4, 57, v6);
  v8 = v5 >> 18;
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    if ( v7 < (signed int)(v8 * (v9 + 1)) )
      return v9;
    v9 = (unsigned __int8)(v9 + 1);
  }
  while ( v10 <= 2u );
  return 3;
}
