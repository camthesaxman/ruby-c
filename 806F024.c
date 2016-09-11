int __fastcall ItemIdToBattleMoveId(int a1)
{
  return *(_WORD *)((char *)&gUnknown_08376504 + ((unsigned int)((a1 << 16) - 18939904) >> 15));
}
