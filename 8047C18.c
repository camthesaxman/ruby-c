int copy_bags_and_unk_data_to_save_blocks()
{
  int *v0; // r3@1
  _DWORD *v1; // r1@1
  signed int v2; // r2@1
  int v3; // r0@2
  int *v4; // r3@3
  _DWORD *v5; // r1@3
  signed int v6; // r2@3
  int v7; // r0@4
  int *v8; // r3@5
  _DWORD *v9; // r1@5
  signed int v10; // r2@5
  int v11; // r0@6
  int *v12; // r3@7
  _DWORD *v13; // r1@7
  signed int v14; // r2@7
  int v15; // r0@8
  int *v16; // r3@9
  _DWORD *v17; // r1@9
  signed int v18; // r2@9
  int v19; // r0@10
  signed int v20; // r4@11
  signed int v21; // r3@11
  signed int v22; // r2@11
  int v23; // r6@12
  int v24; // r7@12
  int v25; // r1@12
  int v26; // r6@12
  int v27; // r7@12
  int v28; // r1@12
  int v29; // r6@12
  int v30; // r7@12
  int v32; // [sp+10h] [bp-4h]@0

  v0 = (int *)33722868;
  v1 = (_DWORD *)33709204;
  v2 = 19;
  do
  {
    v3 = *v0;
    ++v0;
    *v1 = v3;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  v4 = (int *)33722948;
  v5 = (_DWORD *)33709284;
  v6 = 19;
  do
  {
    v7 = *v4;
    ++v4;
    *v5 = v7;
    ++v5;
    --v6;
  }
  while ( v6 >= 0 );
  v8 = (int *)33723028;
  v9 = (_DWORD *)33709364;
  v10 = 15;
  do
  {
    v11 = *v8;
    ++v8;
    *v9 = v11;
    ++v9;
    --v10;
  }
  while ( v10 >= 0 );
  v12 = (int *)33723092;
  v13 = (_DWORD *)33709428;
  v14 = 63;
  do
  {
    v15 = *v12;
    ++v12;
    *v13 = v15;
    ++v13;
    --v14;
  }
  while ( v14 >= 0 );
  v16 = (int *)33723348;
  v17 = (_DWORD *)33709684;
  v18 = 45;
  do
  {
    v19 = *v16;
    ++v16;
    *v17 = v19;
    ++v17;
    --v18;
  }
  while ( v18 >= 0 );
  v20 = 33722868;
  v21 = 33718912;
  v22 = 15;
  do
  {
    v23 = *(_DWORD *)(v20 + 668);
    v24 = *(_DWORD *)(v20 + 672);
    *(_DWORD *)v21 = *(_DWORD *)(v20 + 664);
    *(_DWORD *)(v21 + 4) = v23;
    *(_DWORD *)(v21 + 8) = v24;
    v25 = v21 + 12;
    v26 = *(_DWORD *)(v20 + 680);
    v27 = *(_DWORD *)(v20 + 684);
    *(_DWORD *)v25 = *(_DWORD *)(v20 + 676);
    *(_DWORD *)(v25 + 4) = v26;
    *(_DWORD *)(v25 + 8) = v27;
    v28 = v21 + 24;
    v29 = *(_DWORD *)(v20 + 692);
    v30 = *(_DWORD *)(v20 + 696);
    *(_DWORD *)v28 = *(_DWORD *)(v20 + 688);
    *(_DWORD *)(v28 + 4) = v29;
    *(_DWORD *)(v28 + 8) = v30;
    v20 += 36;
    v21 += 36;
    --v22;
  }
  while ( v22 >= 0 );
  return v32;
}
