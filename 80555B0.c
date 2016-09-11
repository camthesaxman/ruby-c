int __fastcall sub_80555B0(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  char v5; // r0@1
  __int16 v7; // [sp+0h] [bp-14h]@3
  __int16 v8; // [sp+2h] [bp-12h]@3
  int v9; // [sp+10h] [bp-4h]@3

  v3 = a1;
  v4 = a3;
  *(_BYTE *)a3 = a1;
  v5 = 0;
  if ( v3 == a2 )
    v5 = 1;
  *(_BYTE *)(a3 + 1) = v5;
  *(_BYTE *)(a3 + 2) = *(_BYTE *)(4 * v3 + 0x202981B);
  *(_BYTE *)(a3 + 3) = sub_8055B30((unsigned __int8)v3);
  sub_8055B08((unsigned __int8)v3, &v7, &v8);
  *(_WORD *)(v4 + 4) = v7;
  *(_WORD *)(v4 + 6) = v8;
  *(_BYTE *)(v4 + 8) = sub_8055B50((unsigned __int8)v3);
  *(_WORD *)(v4 + 12) = MapGridGetMetatileBehaviorAt(v7, v8);
  return v9;
}
