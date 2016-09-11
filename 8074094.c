int __fastcall ResetPaletteStruct(unsigned __int8 a1)
{
  int v1; // r1@1
  int result; // r0@1

  v1 = 12 * a1 + 33747656;
  *(_DWORD *)v1 = &gDummyPaletteStructTemplate;
  *(_BYTE *)(v1 + 4) = *(_BYTE *)(12 * a1 + 0x202F2CC) & 0xFE;
  *(_WORD *)(v1 + 4) = *(_WORD *)(12 * a1 + 0x202F2CC) & 0xF803;
  *(_DWORD *)(v1 + 4) = *(_DWORD *)(12 * a1 + 0x202F2CC) & 0xFFE007FF;
  *(_WORD *)(v1 + 6) = *(_WORD *)(12 * a1 + 0x202F2CE) & 0xF01F;
  *(_BYTE *)(v1 + 4) = *(_BYTE *)(12 * a1 + 0x202F2CC) & 0xFD;
  result = 0;
  *(_BYTE *)(v1 + 8) = 0;
  *(_BYTE *)(v1 + 9) = 0;
  return result;
}
