int __fastcall sub_805EB98(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-10h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v5, &gUnknown_083754B4, 4);
  if ( *(_BYTE *)(v2 + 33) == 1 && *(_WORD *)(v2 + 12) == *(_WORD *)(v2 + 16) )
    *(_BYTE *)(v2 + 33) = 2;
  return (unsigned __int8)MoveFieldObjectInNextDirectionInSequence(v2, v3, (int)&v5);
}
