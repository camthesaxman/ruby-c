int __fastcall sub_809A5E8(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 50) )
  {
    --*(_WORD *)(a1 + 50);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 32);
    *(_WORD *)(v1 + 32) = v2;
    if ( v2 == *(_WORD *)(v1 + 48) )
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  }
  return v4;
}
