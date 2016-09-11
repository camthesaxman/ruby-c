int __fastcall sub_80AD8FC(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 36);
  if ( *(_WORD *)(v1 + 36) )
  {
    *(_WORD *)(v1 + 36) = v2 - 2;
  }
  else
  {
    v3 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 == 31 )
    {
      *(_WORD *)(v1 + 46) = 0;
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    }
  }
  return v5;
}
