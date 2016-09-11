int __fastcall RemoveFieldObjectInternal(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@1
  unsigned int v4; // [sp+4h] [bp-Ch]@1
  int v5; // [sp+Ch] [bp-4h]@1

  v1 = a1;
  v4 = v4 & 0xFFFF0000 | *(_WORD *)(GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5)) + 6);
  *((_DWORD *)&unk_2020010 + 17 * *(_BYTE *)(v1 + 4)) = &v3;
  DestroySprite((int)&gSprites[68 * *(_BYTE *)(v1 + 4)]);
  return v5;
}
