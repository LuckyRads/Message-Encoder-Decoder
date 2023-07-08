/*
 * This file is generated by jOOQ.
 */
package com.lucky.messageencoderdecoder.generated.jooq.tables.pojos;


import java.io.Serializable;
import java.time.LocalDateTime;


/**
 * This class is generated by jOOQ.
 */
@SuppressWarnings({ "all", "unchecked", "rawtypes" })
public class FlywaySchemaHistory implements Serializable {

    private static final long serialVersionUID = 1L;

    private final Integer installedRank;
    private final String version;
    private final String description;
    private final String type;
    private final String script;
    private final Integer checksum;
    private final String installedBy;
    private final LocalDateTime installedOn;
    private final Integer executionTime;
    private final Byte success;

    public FlywaySchemaHistory(FlywaySchemaHistory value) {
        this.installedRank = value.installedRank;
        this.version = value.version;
        this.description = value.description;
        this.type = value.type;
        this.script = value.script;
        this.checksum = value.checksum;
        this.installedBy = value.installedBy;
        this.installedOn = value.installedOn;
        this.executionTime = value.executionTime;
        this.success = value.success;
    }

    public FlywaySchemaHistory(
        Integer installedRank,
        String version,
        String description,
        String type,
        String script,
        Integer checksum,
        String installedBy,
        LocalDateTime installedOn,
        Integer executionTime,
        Byte success
    ) {
        this.installedRank = installedRank;
        this.version = version;
        this.description = description;
        this.type = type;
        this.script = script;
        this.checksum = checksum;
        this.installedBy = installedBy;
        this.installedOn = installedOn;
        this.executionTime = executionTime;
        this.success = success;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.installed_rank</code>.
     */
    public Integer getInstalledRank() {
        return this.installedRank;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.version</code>.
     */
    public String getVersion() {
        return this.version;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.description</code>.
     */
    public String getDescription() {
        return this.description;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.type</code>.
     */
    public String getType() {
        return this.type;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.script</code>.
     */
    public String getScript() {
        return this.script;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.checksum</code>.
     */
    public Integer getChecksum() {
        return this.checksum;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.installed_by</code>.
     */
    public String getInstalledBy() {
        return this.installedBy;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.installed_on</code>.
     */
    public LocalDateTime getInstalledOn() {
        return this.installedOn;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.execution_time</code>.
     */
    public Integer getExecutionTime() {
        return this.executionTime;
    }

    /**
     * Getter for
     * <code>message-encoder-decoder.flyway_schema_history.success</code>.
     */
    public Byte getSuccess() {
        return this.success;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        final FlywaySchemaHistory other = (FlywaySchemaHistory) obj;
        if (this.installedRank == null) {
            if (other.installedRank != null)
                return false;
        }
        else if (!this.installedRank.equals(other.installedRank))
            return false;
        if (this.version == null) {
            if (other.version != null)
                return false;
        }
        else if (!this.version.equals(other.version))
            return false;
        if (this.description == null) {
            if (other.description != null)
                return false;
        }
        else if (!this.description.equals(other.description))
            return false;
        if (this.type == null) {
            if (other.type != null)
                return false;
        }
        else if (!this.type.equals(other.type))
            return false;
        if (this.script == null) {
            if (other.script != null)
                return false;
        }
        else if (!this.script.equals(other.script))
            return false;
        if (this.checksum == null) {
            if (other.checksum != null)
                return false;
        }
        else if (!this.checksum.equals(other.checksum))
            return false;
        if (this.installedBy == null) {
            if (other.installedBy != null)
                return false;
        }
        else if (!this.installedBy.equals(other.installedBy))
            return false;
        if (this.installedOn == null) {
            if (other.installedOn != null)
                return false;
        }
        else if (!this.installedOn.equals(other.installedOn))
            return false;
        if (this.executionTime == null) {
            if (other.executionTime != null)
                return false;
        }
        else if (!this.executionTime.equals(other.executionTime))
            return false;
        if (this.success == null) {
            if (other.success != null)
                return false;
        }
        else if (!this.success.equals(other.success))
            return false;
        return true;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((this.installedRank == null) ? 0 : this.installedRank.hashCode());
        result = prime * result + ((this.version == null) ? 0 : this.version.hashCode());
        result = prime * result + ((this.description == null) ? 0 : this.description.hashCode());
        result = prime * result + ((this.type == null) ? 0 : this.type.hashCode());
        result = prime * result + ((this.script == null) ? 0 : this.script.hashCode());
        result = prime * result + ((this.checksum == null) ? 0 : this.checksum.hashCode());
        result = prime * result + ((this.installedBy == null) ? 0 : this.installedBy.hashCode());
        result = prime * result + ((this.installedOn == null) ? 0 : this.installedOn.hashCode());
        result = prime * result + ((this.executionTime == null) ? 0 : this.executionTime.hashCode());
        result = prime * result + ((this.success == null) ? 0 : this.success.hashCode());
        return result;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("FlywaySchemaHistory (");

        sb.append(installedRank);
        sb.append(", ").append(version);
        sb.append(", ").append(description);
        sb.append(", ").append(type);
        sb.append(", ").append(script);
        sb.append(", ").append(checksum);
        sb.append(", ").append(installedBy);
        sb.append(", ").append(installedOn);
        sb.append(", ").append(executionTime);
        sb.append(", ").append(success);

        sb.append(")");
        return sb.toString();
    }
}
