_BOOL4 __fastcall FieldObjectIsSpecialAnimActive(int a1)
{
  return *(_BYTE *)a1 & 0x40 && *(_BYTE *)(a1 + 28) != 255;
}
