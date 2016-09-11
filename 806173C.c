int __fastcall sub_806173C(int a1, int a2)
{
  if ( *(_WORD *)(a2 + 52) & 1 )
    *(_BYTE *)(a2 + 44) = *(_BYTE *)(a2 + 44) & 0xC0 | ((*(_BYTE *)(a2 + 44) & 0x3F) + 1) & 0x3F;
  return (unsigned __int8)sub_8061714(a1, a2);
}
