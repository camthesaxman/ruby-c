int __fastcall CalculateBoxMonChecksum(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v2; // r6@1
  int v3; // r1@1
  _WORD *v4; // r5@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r3@1
  signed int v8; // r1@1
  _WORD *v9; // r2@3
  signed int v10; // r1@3
  _WORD *v11; // r2@5
  signed int v12; // r1@5
  _WORD *v13; // r2@7
  signed int v14; // r1@7

  v1 = a1;
  v2 = 0;
  v3 = *a1;
  v4 = (_WORD *)((int (*)(void))GetSubstruct)();
  v5 = GetSubstruct(v1, *v1, 1);
  v6 = GetSubstruct(v1, *v1, 2);
  v7 = GetSubstruct(v1, *v1, 3);
  v8 = 5;
  do
  {
    v2 = (v2 + *v4) & 0xFFFF;
    ++v4;
    --v8;
  }
  while ( v8 >= 0 );
  v9 = (_WORD *)v5;
  v10 = 5;
  do
  {
    v2 = (v2 + *v9) & 0xFFFF;
    ++v9;
    --v10;
  }
  while ( v10 >= 0 );
  v11 = (_WORD *)v6;
  v12 = 5;
  do
  {
    v2 = (v2 + *v11) & 0xFFFF;
    ++v11;
    --v12;
  }
  while ( v12 >= 0 );
  v13 = (_WORD *)v7;
  v14 = 5;
  do
  {
    v2 = (v2 + *v13) & 0xFFFF;
    ++v13;
    --v14;
  }
  while ( v14 >= 0 );
  return v2;
}
