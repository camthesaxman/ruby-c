signed int __fastcall sub_8062608(int a1, int a2)
{
  int v2; // r5@1
  signed int result; // r0@1

  v2 = a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xEF | 16
                                                 * ((unsigned int)*(_BYTE *)(GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5))
                                                                           + 12) << 25 >> 31);
  result = 1;
  *(_WORD *)(v2 + 50) = 1;
  return result;
}
