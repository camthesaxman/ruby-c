int __fastcall FieldObjectUpdateSubpriority(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( !(*(_BYTE *)(a1 + 3) & 4) )
    SetObjectSubpriorityByZCoord(*(_BYTE *)(a1 + 11) >> 4, a2, 1);
  return v3;
}
