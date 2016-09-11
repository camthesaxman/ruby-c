int sub_8010874()
{
  int v0; // r0@1
  signed int v1; // r2@1
  _WORD *v2; // r10@1
  _WORD *v3; // r9@1
  _WORD *v4; // r8@1
  _WORD *v5; // r12@1
  signed int v6; // r4@1
  int v7; // r5@1
  _WORD *v8; // r7@1
  _WORD *v9; // r6@1
  unsigned int v10; // r1@2
  signed int v11; // r3@5
  _WORD *v12; // r4@5
  signed int v13; // r2@5
  unsigned int v14; // r1@6
  unsigned int v15; // r2@9
  _BYTE *v16; // r0@14
  signed int v17; // r2@16
  signed int v18; // r2@18
  char *v19; // r0@18
  signed int v20; // r2@20
  char *v21; // r1@20
  int v23; // [sp+1Ch] [bp-4h]@0

  v0 = sub_801365C(0);
  sub_801377C(v0);
  v1 = 0;
  v2 = (_WORD *)33705036;
  v3 = (_WORD *)33705028;
  v4 = (_WORD *)33705020;
  v5 = (_WORD *)33705012;
  v6 = 33705128;
  v7 = 0;
  v8 = (_WORD *)33705004;
  v9 = (_WORD *)33705044;
  do
  {
    *(_DWORD *)(v7 + 33705112) = 0;
    v10 = 0;
    do
      *(_BYTE *)(v6 + v10++) = 0;
    while ( v10 <= 0x1B );
    *(_BYTE *)(v6 + 22) = 2;
    *(_BYTE *)(v1 + 33705072) = 0;
    *v5 = 0;
    *v4 = 0;
    *v3 = 0;
    *v2 = 0;
    *(_BYTE *)(v1 + 33705052) = -1;
    *v9 = 0;
    *v8 = 0;
    *(_DWORD *)(v7 + 33648896) = 0;
    ++v2;
    ++v3;
    ++v4;
    ++v5;
    v6 += 28;
    v7 += 4;
    ++v8;
    ++v9;
    ++v1;
  }
  while ( v1 <= 3 );
  v11 = 33705088;
  v12 = (_WORD *)33705082;
  v13 = 1;
  do
  {
    *v12 = 0;
    v14 = 0;
    do
      *(_BYTE *)(v11 + v14++) = 0;
    while ( v14 <= 0xB );
    v11 += 12;
    ++v12;
    --v13;
  }
  while ( v13 >= 0 );
  v2024C07 = 0;
  v2024C08 = 0;
  v2024DB8 = 0;
  v15 = 0;
  do
    *(_BYTE *)(v15++ + 33705404) = 0;
  while ( v15 <= 0x2B );
  v2024C6C = 0;
  if ( !(v20239F8 & 2) && v2024EB9 & 4 )
    v2024C6C = 128;
  v2016084 = (unsigned int)v2024EB9 << 30 >> 31;
  v2024C0E = 0;
  v2024D26 = 0;
  v2024A64 = 0;
  v2024D1A = 0;
  v2017130 = 0;
  v2017160 = 0;
  v16 = (_BYTE *)33705253;
  do
    *v16-- = 0;
  while ( (signed int)v16 >= 33705246 );
  v2024D18 = 0;
  v2024BEC = 0;
  v2024DE8 = 0;
  v2016002 = 0;
  v20160A1 = 0;
  byte_3004324 = 0;
  v2024C0C = 0;
  v2016078 = 0;
  v2016086 = 0;
  v2016087 = 0;
  v2016089 = 100 * *((_BYTE *)&gBaseStats + 28 * GetMonData(&unk_30045C0, 11) + 8) / 1275;
  v2016088 = 3;
  v201601B = 0;
  v2016056 = 1;
  v17 = 0;
  do
  {
    *(_BYTE *)(v17 + 33644716) = 0;
    *(_BYTE *)(v17 + 33644748) = 0;
    *(_BYTE *)(v17 + 33644776) = 0;
    *(_BYTE *)(v17 + 33644784) = 0;
    *(_BYTE *)(v17 + 33644800) = 0;
    *(_BYTE *)(v17++ + 33644808) = 0;
  }
  while ( v17 <= 7 );
  v20160C8 = 6;
  v20160C9 = 6;
  v2016113 = 0;
  v18 = 10;
  v19 = &byte_3004320;
  do
  {
    *v19-- = 0;
    --v18;
  }
  while ( v18 >= 0 );
  byte_30042F3 = 0;
  byte_30042E0 = 0;
  byte_30042E1 = 0;
  byte_30042E2 = 0;
  byte_30042E3 = 0;
  byte_30042E4 = 0;
  byte_30042E5 &= 0xFCu;
  word_3004300 = 0;
  word_3004302 = 0;
  word_3004304 = 0;
  word_30042E6 = 0;
  word_3004306 = 0;
  word_3004308 = 0;
  v20 = 0;
  v21 = &byte_30042F4;
  do
  {
    byte_30042E8[v20] = 0;
    *v21 = 0;
    (v21++)[22] = 0;
    ++v20;
  }
  while ( v20 <= 9 );
  return v23;
}
