int __fastcall sub_804780C(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 == 20 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 28) = sub_8047830;
  }
  return v4;
}
