int __fastcall move_something(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r8@1
  int v4; // r9@1
  signed int v5; // r4@2
  int v6; // r10@2
  _WORD *v7; // r6@2
  _WORD *v8; // r5@2
  int v9; // r2@3
  int v10; // r0@4
  unsigned int *v11; // r1@4
  int (*v12)(); // r6@7
  _WORD *v13; // r1@8
  signed int v14; // r4@8
  __int16 *v15; // r0@13
  __int16 *v16; // r1@15
  signed int v17; // r4@15
  int i; // r4@18
  int v19; // r0@20
  int v21; // [sp+0h] [bp-24h]@1
  int v22; // [sp+20h] [bp-4h]@0

  v21 = a1;
  v3 = a2;
  v4 = a3;
  if ( sub_8076BE0(a1) << 24 )
  {
    v6 = 4 * v3;
    v12 = sub_80759D0;
    v13 = (_WORD *)33748938;
    v14 = 3;
    do
    {
      *v13 = v2019348;
      ++v13;
      --v14;
    }
    while ( v14 >= 0 );
  }
  else
  {
    sub_8079E24();
    sub_8043EB4(0);
    v5 = 0;
    v6 = 4 * v3;
    v7 = (_WORD *)33704554;
    v8 = (_WORD *)33748938;
    do
    {
      if ( battle_side_get_owner((unsigned __int8)v5) << 24 )
      {
        v10 = 25 * *v7;
        v11 = (unsigned int *)&unk_30045C0;
      }
      else
      {
        v10 = 25 * *v7;
        v11 = dword_3004360;
      }
      *v8 = GetMonData((int)&v11[v10], 11, v9);
      ++v7;
      ++v8;
      ++v5;
    }
    while ( v5 <= 3 );
    v12 = sub_80759D0;
  }
  if ( v4 )
    v202F7C6 = v3;
  else
    v202F7C6 = 0;
  v15 = &word_3004B0E;
  do
  {
    *v15 = 0;
    --v15;
  }
  while ( (signed int)v15 >= (signed int)&word_3004B00 );
  v202F7C2 = -1;
  v202F7C3 = -1;
  v202F7A4 = *(_DWORD *)(v21 + v6);
  v202F7B1 = 1;
  v202F7B0 = 0;
  v202F7AC = v12;
  v16 = &word_3004B10;
  v17 = 7;
  do
  {
    *v16;
    *v16 = -1;
    ++v16;
    --v17;
  }
  while ( v17 >= 0 );
  if ( v4 )
  {
    for ( i = 0; ; ++i )
    {
      v19 = (unsigned __int16)gUnknown_081C7160[i];
      if ( v19 == 0xFFFF )
        break;
      if ( v3 == v19 )
      {
        m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 128);
        break;
      }
    }
  }
  word_30042C4 = 0;
  word_3004240 = 0;
  word_3004200 = 0;
  word_3004244 = 0;
  return v22;
}
