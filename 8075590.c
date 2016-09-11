_BOOL4 mplay_has_finished_maybe()
{
  return (dword_30073C4 >= 0 || !(dword_3007404 & 0x80000000)) && ((_WORD)dword_30073C4 || (_WORD)dword_3007404);
}
