int __fastcall sub_8105BB4(unsigned __int8 a1, int a2)
{
  return (unsigned __int8)sub_8105BF8(
                            a1,
                            *(void **)((char *)&gUnknown_083ECF0C + (4 * a2 & 0x3FF)),
                            *(_WORD *)((char *)&gUnknown_083ECE7E + (4 * a2 & 0x3FF)),
                            *(_WORD *)((char *)&unk_83ECE80 + (4 * a2 & 0x3FF)));
}
