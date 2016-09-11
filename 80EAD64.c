_BYTE *__fastcall sub_80EAD64(_BYTE *a1, int a2)
{
  return StringCopy(a1, *(void **)((char *)&gEasyChatGroupNames + (4 * a2 & 0x3FF)));
}
