int __fastcall sub_81287C4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    FieldEffectStop(a1, *(_BYTE *)(a1 + 48));
  }
  else
  {
    sub_806487C(a1, 0);
    SetObjectSubpriorityByZCoord(*(_BYTE *)(v1 + 46), v1, 0);
  }
  return v3;
}
