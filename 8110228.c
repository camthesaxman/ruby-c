int __fastcall sub_8110228(int a1)
{
  unsigned __int16 *v1; // r1@1
  unsigned __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = (unsigned __int16 *)(56 * a1 + 33750998);
  v2 = *(_WORD *)(56 * a1 + 0x202FFD6) + 1;
  *v1 = v2;
  if ( v2 > 0x270Fu )
    *v1 = 9999;
  return v4;
}
