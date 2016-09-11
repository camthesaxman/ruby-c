int __fastcall SetObjectSubpriorityByZCoord(unsigned __int8 a1, int a2, char a3)
{
  int v4; // [sp+8h] [bp-4h]@0

  *(_BYTE *)(a2 + 67) = a3
                      + 2
                      * (16
                       - (((*(_WORD *)(a2 + 34) - *(_BYTE *)(a2 + 41) + (unsigned __int16)gSpriteCoordOffsetY + 8) & 0xFFu) >> 4))
                      + gUnknown_08376050[a1];
  return v4;
}
