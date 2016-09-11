int __fastcall sub_80DB8C0(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v3; // r4@2
  __int16 v4; // r7@2
  signed int v5; // r5@2
  _WORD *v6; // r2@2
  _WORD *v7; // r1@2
  __int16 v8; // r0@4
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 == 2 )
  {
    *(_WORD *)(v1 + 48) = 0;
    v3 = *(_WORD *)(v1 + 46);
    v4 = *(_WORD *)(2 * (v3 + 8) + 0x202EEC8);
    v5 = 8;
    v6 = (_WORD *)(2 * v3 + 33746648);
    v7 = (_WORD *)(2 * (v3 + 7) + 33746632);
    do
    {
      *v6 = *v7;
      --v7;
      --v6;
      --v5;
    }
    while ( v5 > 0 );
    *(_WORD *)(2 * (v3 + 1) + 0x202EEC8) = v4;
    v8 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v8;
    if ( v8 == 16 )
      *(_DWORD *)(v1 + 28) = sub_80DB92C;
  }
  return v10;
}
