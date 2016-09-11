int __fastcall sub_813FE70(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == 10 )
  {
    *(_WORD *)(v1 + 56) = (unsigned __int8)CreateTask((int)TaskDummy, 50);
    *(_DWORD *)(v1 + 28) = sub_813FEC8;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 48] = 0;
  }
  return v4;
}
