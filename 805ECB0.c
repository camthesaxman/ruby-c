int __fastcall sub_805ECB0(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-10h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v5, &gUnknown_083754D4, 4);
  if ( *(_BYTE *)(v2 + 33) == 2 && *(_WORD *)(v2 + 14) == *(_WORD *)(v2 + 18) )
    *(_BYTE *)(v2 + 33) = 3;
  return (unsigned __int8)MoveFieldObjectInNextDirectionInSequence(v2, v3, (int)&v5);
}
