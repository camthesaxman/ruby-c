int __fastcall sub_8088890(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32) - 20;
  *(_WORD *)(v1 + 32) = v2;
  if ( v2 <= 120 )
  {
    *(_WORD *)(v1 + 32) = 120;
    *(_WORD *)(v1 + 48) = 30;
    *(_DWORD *)(v1 + 28) = sub_80888D4;
    if ( *(_WORD *)(v1 + 58) )
      sub_8075090(*(_WORD *)(v1 + 46), 0, 125, 0xAu);
    else
      cry_related(*(_WORD *)(v1 + 46), 0);
  }
  return v4;
}
