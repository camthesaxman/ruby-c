int __fastcall sub_80A9BE4(unsigned __int8 a1)
{
  int v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    DestroyTask(a1);
    v1 = v203869A & 1;
    if ( !(v203869A & 1) )
      v1 = sub_80AF668();
    sub_80C2358(v1);
  }
  return v3;
}
