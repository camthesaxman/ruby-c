int __fastcall task50_overworld_door(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (char *)&unk_3004B28 + 40 * a1;
  if ( !sub_8058464((*((_WORD *)v2 + 2) << 16) | *((_WORD *)v2 + 3), (*(_WORD *)v2 << 16) | *((_WORD *)v2 + 1), (int)v2) )
    DestroyTask(v1);
  return v4;
}
