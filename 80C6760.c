int __fastcall sub_80C6760(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  int v5; // r1@3
  __int16 v6; // r2@3
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = (signed __int16)(*((_WORD *)v2 + 2) - 4);
  if ( v3 > 0x10 )
  {
def_80C6784:
    ++*((_WORD *)v2 + 2);
  }
  else
  {
    switch ( v3 )
    {
      case 0u:
      case 8u:
        v4 = *(_WORD *)v2;
        v5 = *((_WORD *)v2 + 1);
        v6 = 548;
        goto _080C67EE;
      case 4u:
      case 0xCu:
        v4 = *(_WORD *)v2;
        v5 = *((_WORD *)v2 + 1);
        v6 = 544;
_080C67EE:
        MapGridSetMetatileIdAt(v4, v5, v6);
        CurrentMapDrawMetatileAt(*(_WORD *)v2, *((_WORD *)v2 + 1));
        goto def_80C6784;
      case 0x10u:
        MapGridSetMetatileIdAt(*(_WORD *)v2, *((_WORD *)v2 + 1), 548);
        CurrentMapDrawMetatileAt(*(_WORD *)v2, *((_WORD *)v2 + 1));
        FieldEffectActiveListRemove(0x3Du);
        script_env_2_enable_and_set_ctx_running();
        DestroyTask(v1);
        break;
      default:
        goto def_80C6784;
    }
  }
  return v8;
}
